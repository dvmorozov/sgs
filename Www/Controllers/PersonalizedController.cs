using System;
using System.Web.Security;
using web.Models;

namespace web.Controllers
{
    public class PersonalizedController : ProjectPersonalizedController
    {
        protected SGMasterBaseEntities Entities = new SGMasterBaseEntities();

        protected void ExceptionMessageToViewBag(Exception e)
        {
            ViewBag.ExceptionMessage = e.InnerException != null ? e.InnerException.Message : e.Message;
        }

        protected Guid GetUserId()
        {
            if (User != null)
            {
                //  check for unit-testing mode
                MembershipUser mu = Membership.GetUser(User.Identity.Name);
                if (mu != null)
                {
                    if (mu.ProviderUserKey != null) return (Guid) mu.ProviderUserKey;
                }
            }
            return new Guid();
        }

        protected override void Dispose(bool disposing)
        {
            if (Entities != null) Entities.Dispose();
            base.Dispose(disposing);
        }
    }
}