api = 2
core = 7.x

;=== Modules ==================================================================
projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = "1.5"

projects[metatag][subdir] = contrib
projects[metatag][version] = "1.7"

projects[page_title][subdir] = contrib
projects[page_title][version] = "2.7"
projects[page_title][patch][] = "https://www.drupal.org/files/issues/cannot-redeclare-node_page_title_alter-2516726-10.patch"

projects[pathauto][subdir] = contrib
projects[pathauto][version] = "1.3"

projects[pathauto_entity][subdir] = contrib
projects[pathauto_entity][version] = "1.0"

projects[redirect][subdir] = contrib
projects[redirect][version] = "1.0-rc3"

projects[transliteration][subdir] = contrib
projects[transliteration][version] = "3.2"

projects[xmlsitemap][subdir] = contrib
projects[xmlsitemap][version] = "2.2"
