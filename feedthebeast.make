api = 2

core = 7.x

projects[pathauto][version] = 1.1
projects[pathauto][subdir] = contrib
projects[xmlsitemap][version] = 2.0-rc1
projects[xmlsitemap][subdir] = contrib
projects[metatag][version] = 1.0-alpha6
projects[metatag][subdir] = contrib
projects[mollom][version] = 2.0
projects[mollom][subdir] = contrib
projects[logintoboggan][version] = 1.3
projects[logintoboggan][subdir] = contrib

; The enterprise product
projects[fences][version] = 1.0-beta2
projects[fences][subdir] = contrib
projects[fape][version] = 1.1
projects[fape][subdir] = contrib


; Fetch the current version of NS Core.
projects[ns_core][type] = module
projects[ns_core][version] = 2.x
projects[ns_core][download][type] = git
projects[ns_core][download][branch] = 7.x-2.x
projects[ns_core][subdir] = contrib

; Semantic panels doesn't have a stable release yet.
projects[semantic_panels][type] = module
projects[semantic_panels][version] = 1.x
projects[semantic_panels][download][type] = git
projects[semantic_panels][download][revision] = 2b691f0
projects[semantic_panels][subdir] = contrib

; Themes
projects[lucid][type] = theme
projects[lucid][version] = 1.x
projects[lucid][download][type] = git
projects[lucid][download][branch] = 7.x-1.x
projects[lucid][subdir] = contrib

projects[ns_theme][type] = theme
projects[ns_theme][version] = 2.0-alpha4
projects[ns_theme][subdir] = contrib


; Libraries
libraries[jquery.cycle][download][type] = get
libraries[jquery.cycle][download][url] = http://malsup.com/jquery/cycle/release/jquery.cycle.zip?v2.9999.5
libraries[jquery.cycle][destination] = libraries
