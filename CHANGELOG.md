# CHANGELOG

## v1.7.5

Additions:

* Check GitHub system status on app activation
* Notifications support (push notifications will be added soon)
* Added reload button for organizations
* Added full commit message text to commit view
* Reload button for forks

Changes:

* New icons for public and private state (repos and gists)
* Finetuned the icon. Thanks @benjaminrabe
* Improved code highlighting
* Improved repository view header
* Improved gist view

Bugfixes:

* Fixed missing pull requests for pull request comment events
* Fixed crash in events controller (when tapping loading cell)
* Fixed crash in accounts controller (when deleting the last account)
* Fixed follower button in following event cell
* Fixed display error for writing comments in landscape mode
* Fixed indefinitely loading case for repository view

## v1.7.1

Additions:

* Allow scaling in code view
* Added license acknowledgements for third party libs
* Separate lists for watched and starred repositories

Changes:

* New icon. Thanks @benjaminrabe
* Inverted menu with dark colors
* Section the accounts by endpoint. Thanks @lmarlow
* Increase revealed space for top view when menu is shown
* Removed the animation for initial top view slide-in

Bugfixes:

* Show authentication message HUD on initial login. Thanks @zhen9ao
* Fixed icon graphic glitches (dark borders in upper edges)
* Fixed crash in repo controller (during loading of the branches)
* Fixed crash in user controller (when tapping on cell in empty orgs and repo lists)
* Fixed crash for certain issue events

## v1.7.0

Additions:

* New navigation menu
* Authentication via OAuth (please reauthenticate)
* Support for Pull Requests
* Reworked commenting and comment loading
* Fixes and updates for gists
* Preparations for announced API changes
* Added repo link to issue and pull request pages
* Open GitHub links by changing https:// to ioc://
* Allow issue and pull editing for repo owners

Bugfixes:

* Fixed maximum avatar size
* Proper theme default
