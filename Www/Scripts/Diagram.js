
function isDefined(obj) {
	if (obj !== undefined && obj != null)
		return true;
	else
		return false;
}

//	Получает границы прямоугольной области, занимаемой диаграммой.
function getSvgBoundaries(svgTag) {
	var left, top, right, bottom;
	if (isDefined(svgTag)) {
		var children = $(svgTag).children();
		if (isDefined(children)) {

			for (var index = 0; index < children.length; ++index) {
				var child = children[index];

				var x, y, width, height;

				if (child.x !== undefined)
					x = child.x.baseVal.value;

				if (child.y !== undefined)
					y = child.y.baseVal.value;

				if (child.width !== undefined)
					width = child.width.baseVal.value;

				if (child.height !== undefined)
					height = child.height.baseVal.value;

				if (x !== undefined) {
					if (left !== undefined) {
						if (x < left) left = x;
					} else {
						left = x;
					}
				}

				if (y !== undefined) {
					if (top !== undefined) {
						if (y < top) top = y;
					} else {
						top = y;
					}
				}

				if (width !== undefined) {
					var childRight = x + width;
					if (right !== undefined) {
						if (childRight > right) right = childRight;
					} else {
						right = childRight;
					}
				}

				if (height !== undefined) {
					var childBottom = y + height;
					if (bottom != undefined) {
						if (childBottom > bottom) bottom = childBottom;
					} else {
						bottom = childBottom;
					}
				}
			}
		}
	}

	if (left === undefined) left = 0;
	if (right === undefined) right = 0;
	if (top === undefined) top = 0;
	if (bottom === undefined) bottom = 0;

	return { "left": left, "top": top, "right": right, "bottom": bottom };
}

// Сдвигаем все элементы.
function moveDiagram(svgTag, x, y) {
	var children = $(svgTag).children();

	if (isDefined(svgTag)) {
		if (isDefined(children)) {
			for (var index = 0; index < children; ++index) {
				var child = children[index];

				if (child.x !== undefined)
					child.x.baseVal.value += x;

				if (child.y !== undefined)
					child.y.baseVal.value += y;
			}
		}
	}
}

function setSvgPositions() {
	var svgTags = document.getElementsByTagName('svg');
	for (var index = 0; index < svgTags.length; ++index) {
		var svgTag = svgTags[index];
		var boundaries = getSvgBoundaries(svgTag);
		console.log(boundaries);
		moveDiagram(svgTag, -boundaries.left, -boundaries.top);
	}
}

//	Устанавливает размеры SVG.
function setSvgSizes() {
	var svgTags = document.getElementsByTagName('svg');
	for (var index = 0; index < svgTags.length; ++index) {
		var svgTag = svgTags[index];

		var boundaries = getSvgBoundaries(svgTag);
		console.log(boundaries);

		//	Не понятно, какой смысл имеют отрицательные left и top.
		var width = boundaries.right; //  - boundaries.left;
		var height = boundaries.bottom; //  - boundaries.top;

		svgTag.style.width = width + 'px';
		svgTag.style.height = height + 'px';
	}
}

window.onload = function () {
	setSvgSizes();
	//setSvgPositions();
	update();
};

function update() {
	var u = String(document.URL);
	$.ajax({
		url: u.replace(/ShowDiagram/g, 'Update'),
		method: "GET",
		dataType: "text",
		cache: false,
		timeout: 10000,

		success: function (response) {
			if (undefined == response)
				return;

			var object = jQuery.parseJSON(response);
			var valueIdentifiers = document.getElementsByTagName("value_identifier");

			//	По всем полученным значениям,...
			for (var i = 0; i < object.states.length; i++) {
				//	...по всем тэгам, к кот. могут быть привязаны значения.
				for (var j = 0; j < valueIdentifiers.length; j++) {
					var el = valueIdentifiers[j];

					if (el.childNodes[0].nodeValue == object.states[i].ValueIdentifier) {

						var states = el.getElementsByTagName("state");
						var upperel = el.parentNode;
						//	По всем "состояниям" (подэлементам) элемента диаграммы.
						for (var k = 0; k < states.length; k++) {
							var state = states[k].childNodes[0];

							if (state.nodeValue == object.states[i].State) {
								//	Состояние найдено среди полученного списка состояний - элемент отображается.
								$(upperel).show();
							}
							else {
								//	Если состояние не найдено в полученном списке - элемент "прячется".
								$(upperel).hide();
							}
						}
					}
				}
			}
		},

		error: function () { },
		complete: function () {
			setTimeout(function () {
				update();
			}, 1000);
		}
	});
}

;

function svg_oumouseover() {
};

function svg_oumouseout() {
};

function on_svg_click() {
}
