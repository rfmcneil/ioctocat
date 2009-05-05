// settings
#define kUsernameDefaultsKey @"username"
#define kTokenDefaultsKey @"token"

// tables
#define kStandardCellIdentifier @"StandardCell"
#define kRepositoryCellIdentifier @"RepositoryCell"
#define kTextCellIdentifier @"TextCell"
#define kLabeledCellIdentifier @"LabeledCell"
#define kFeedEntryCellIdentifier @"FeedEntryCell"
#define kIssueCellIdentifier @"IssueCell"
#define kCommitCellIdentifier @"CommitCell"

// URLs
#define kConnectivityCheckURL @"http://github.com/robots.txt"
#define kNewsFeedFormat @"https://github.com/%@.private.atom?token=%@"
#define kActivityFeedFormat @"https://github.com/%@.private.actor.atom?token=%@"
#define kUserXMLFormat @"https://github.com/api/v2/xml/user/show/%@"
#define kAuthenticateUserXMLFormat @"https://github.com/api/v2/xml/user/show/%@?login=%@&token=%@"
#define kUserReposFormat @"https://github.com/api/v2/xml/repos/show/%@"
#define kUserSearchFormat @"https://github.com/api/v2/xml/user/search/%@"
#define kUserFeedFormat @"http://github.com/%@.atom"
#define kRepoXMLFormat @"https://github.com/api/v2/xml/repos/show/%@/%@"
#define kRepoSearchFormat @"https://github.com/api/v2/xml/repos/search/%@"
#define kRepoFeedFormat @"http://github.com/feeds/%@/commits/%@/master"
#define kPrivateRepoFeedFormat @"https://github.com/feeds/%@/commits/%@/master"
#define kRepoCommitsXMLFormat @"https://github.com/api/v2/xml/commits/list/%@/%@/%@"
#define kRepoWatchFormat @"https://github.com/api/v2/xml/repos/watch/%@/%@?token=%@"
#define kRepoUnwatchFormat @"https://github.com/api/v2/xml/repos/watch/%@/%@?token=%@"
#define kUserFollowFormat @"https://github.com/api/v2/xml/user/follow/%@?token=%@"
#define kUserUnfollowFormat @"https://github.com/api/v2/xml/user/unfollow/%@?token=%@"
#define kRepoIssuesXMLFormat @"http://github.com/api/v2/xml/issues/list/%@/%@/%@"
#define kIssueGithubFormat @"http://github.com/%@/%@/issues#issue/%d"

// Tabs
#define kMyFeedsTabIndex 0
#define kMyRepositoriesTabIndex 1

// KVO
#define kResourceStatusKeyPath @"status"
#define kResourceErrorKeyPath @"error"
#define kUserGravatarKeyPath @"gravatar"
#define kRepoRecentCommitsStatusKeyPath @"recentCommits.status"
#define kRepositoriesStatusKeyPath @"repositoriesStatus"
#define KUserAuthenticatedKeyPath @"isAuthenticated"
