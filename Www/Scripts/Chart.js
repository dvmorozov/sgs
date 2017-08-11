
$(function () {
    var seqNum = 0;

    function update() {
        var u = String(document.URL);
        // https://www.evernote.com/shard/s132/nl/14501366/82196283-fd9c-43a4-844a-5b2845f602e8
        //	Вместо AJAX - простая замена ссылки. Счетчик увеличивается, чтобы обойти кэширование.
        u = u.replace(/ShowChart/g, 'GetChartContent');
        u += '?seqNum=' + seqNum++;

        document.getElementById('div_chart').setAttribute('src', u);

        setTimeout(function () {
            update();
        }, 5000);
    };

    update();
});
