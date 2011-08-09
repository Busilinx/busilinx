/* $Id: README.txt,v 1.4.2.1 2008/07/14 10:40:11 smk Exp $ */

-- SUMMARY --

Drupal's default locking strategy is optimistic, that is, whenever two users
try to edit the same piece of content, the one hitting the save button first
wins the race, while the other is displayed a message stating "this content has
been modified by another user, changes cannot be saved". Depending on the
number of editors in your organization this might not be an acceptable solution.

The Checkout module implements pessimistic locking, which means that content
will be exclusively locked whenever a user starts editing it. The lock will be
automatically released when the user saves the content or moves away from the
edit page.

For a full description visit the project page:
  http://drupal.org/project/checkout
Bug reports, feature suggestions and latest developments:
  http://drupal.org/project/checkout/issues


-- REQUIREMENTS --

* Crontab, if you wish to make use of automated check-ins. If your hoster
  doesn't give you access to cron take a look at Poormanscron
  (http://drupal.org/project/poormanscron).


-- INSTALLATION --

1. Copy the checkout module to your modules directory and enable it on the
   Modules page (admin/build/modules).

2. Give some roles permission to check out documents at the Access control page
   (admin/user/access). The following permissions can be controlled:

   check out documents - Whether a user may check out documents through editing.
     Even without this permission it will be possible to edit contents, the user
     is just not protected against concurrent edits.

   keep documents checked out - Whether to allow users to manually keep
     documents checked out using a checkbox on the node edit page.

   administer checked out documents - View all checked out documents and
     forcefully check them back in.

3. Configure the module at Content management > Post settings
   (admin/content/node-settings). The only configurable setting currently is
   the automatic check-in time period.

4. (Optionally) Enable cron to make use of automated check-ins.


-- CONTACT --

Author:
Joel Guesclin

Current maintainer:
Stefan Kudwien (smk-ka) - http://www.unleashedmind.com

