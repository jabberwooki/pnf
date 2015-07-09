api = 2
core = 7.x

;=== Contrib modules ==========================================================
projects[admin_menu][subdir] = contrib
;projects[admin_menu][version] = ""

projects[better_formats][subdir] = contrib
;projects[better_formats][version] = ""

projects[ctools][subdir] = contrib
;projects[ctools][version] = ""

projects[ds][subdir] = contrib
;projects[ds][version] = ""

projects[entity][subdir] = contrib
;projects[entity][version] = ""

projects[features][subdir] = contrib
;projects[features][version] = ""

projects[features_extra][subdir] = contrib
;projects[features_extra][version] = ""

projects[field_group][subdir] = contrib
;projects[field_group][version] = ""

projects[files_undo_remove][subdir] = contrib
;projects[files_undo_remove][version] = ""

projects[imce][subdir] = contrib
;projects[imce][version] = ""

projects[imce_mkdir][subdir] = contrib
;projects[imce_mkdir][version] = ""

projects[jquery_update][subdir] = contrib
;projects[jquery_update][version] = ""

projects[l10n_update][subdir] = contrib
;projects[l10n_update][version] = ""

projects[libraries][subdir] = contrib
;projects[libraries][version] = ""

projects[link][subdir] = contrib
;projects[link][version] = ""

projects[linkit][subdir] = contrib
;projects[linkit][version] = ""

projects[options_element][subdir] = contrib
;projects[options_element][version] = ""

projects[role_export][subdir] = contrib
;projects[role_export][version] = ""

projects[strongarm][subdir] = contrib
;projects[strongarm][version] = ""

projects[taxonomy_access_fix][subdir] = contrib
;projects[taxonomy_access_fix][version] = ""

projects[token][subdir] = contrib
;projects[token][version] = ""

projects[user_settings_access][subdir] = contrib
;projects[user_settings_access][version] = ""

projects[uuid][subdir] = contrib
;projects[uuid][version] = ""

projects[uuid_features][subdir] = contrib
;projects[uuid_features][version] = ""

projects[views][subdir] = contrib
;projects[views][version] = ""

;=== Modules - optional =======================================================
projects[addressfield][subdir] = contrib
;projects[addressfield][version] = ""

projects[bean][subdir] = contrib
;projects[bean][version] = ""

projects[block_class][subdir] = contrib
;projects[block_class][version] = ""

projects[boxes][subdir] = contrib
;projects[boxes][version] = ""

projects[custom_search][subdir] = contrib
;projects[custom_search][version] = ""

projects[date][subdir] = contrib
;projects[date][version] = ""

;projects[draggableviews][subdir] = contrib
;projects[draggableviews][version] = ""

projects[email][subdir] = contrib
;projects[email][version] = ""

;projects[email_registration][subdir] = contrib
;projects[email_registration][version] = ""

;projects[entityform][subdir] = contrib
;projects[entityform][version] = ""

projects[entityreference][subdir] = contrib
;projects[entityreference][version] = ""

;projects[field_collection][subdir] = contrib
;projects[field_collection][version] = ""

;projects[field_formatter_class][subdir] = contrib
;projects[field_formatter_class][version] = ""

;projects[field_formatter_settings][subdir] = contrib
;projects[field_formatter_settings][version] = ""

projects[filefield_sources][subdir] = contrib
;projects[filefield_sources][version] = ""

projects[menu_attributes][subdir] = contrib
;projects[menu_attributes][version] = ""

;projects[menu_trail_by_path][subdir] = contrib
;projects[menu_trail_by_path][version] = ""

;projects[migrate][subdir] = contrib
;projects[migrate][version] = ""

;projects[migrate_extras][subdir] = contrib
;projects[migrate_extras][version] = ""

;projects[password_policy][subdir] = contrib
;projects[password_policy][version] = ""

projects[phone][subdir] = contrib
;projects[phone][version] = ""

projects[print][subdir] = contrib
;projects[print][version] = ""

;projects[registration][subdir] = contrib
;projects[registration][version] = ""

;projects[rules][subdir] = contrib
;projects[rules][version] = ""

;projects[views_autocomplete_filters][subdir] = contrib
;projects[views_autocomplete_filters][version] = ""

;projects[views_bulk_operations][subdir] = contrib
;projects[views_bulk_operations][version] = ""

;projects[views_isotope][subdir] = contrib
;projects[views_isotope][version] = ""

;projects[views_slideshow][subdir] = contrib
;projects[views_slideshow][version] = "7.x-3.1"

;projects[views_ui_basic][subdir] = contrib
;projects[views_ui_basic][version] = ""

;=== Mapping modules ==========================================================
;projects[geophp][subdir] = contrib
;projects[geophp][version] = ""

;projects[geocoder][subdir] = contrib
;projects[geocoder][version] = ""

;projects[geofield][subdir] = contrib
;projects[geofield][version] = ""

;projects[leaflet][subdir] = contrib
;projects[leaflet][version] = ""

;libraries[leaflet][download][type] = "file"
;libraries[leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.3.zip"
;libraries[leaflet][directory_name] = "leaflet"
;libraries[leaflet][destination] = "libraries"

;projects[gmap][subdir] = contrib
;projects[gmap][version] = ""

;projects[addressfield_autocomplete][subdir] = contrib
;projects[addressfield_autocomplete][version] = ""

;libraries[geocomplete][download][type] = "file"
;libraries[geocomplete][download][url] = "https://github.com/ubilabs/geocomplete/archive/1.6.4.tar.gz"
;libraries[geocomplete][directory_name] = "geocomplete"
;libraries[geocomplete][destination] = "libraries"

;=== Netlinking ===============================================================
;projects[sharethis][subdir] = contrib
;projects[sharethis][version] = ""

;projects[addthis][subdir] = contrib
;projects[addthis][version] = ""

;projects[addtoany][subdir] = contrib
;projects[addtoany][version] = ""

;=== Newsletter ===============================================================
;projects[mailchimp][subdir] = contrib
;projects[mailchimp][version] = ""

;=== Scald and media related modules ==========================================
projects[scald][subdir] = contrib
;projects[scald][version] = ""

projects[scald_file][subdir] = contrib
;projects[scald_file][version] = ""

projects[scald_dailymotion][subdir] = contrib
;projects[scald_dailymotion][version] = ""

projects[scald_vimeo][subdir] = contrib
;projects[scald_vimeo][version] = ""

projects[scald_soundcloud][subdir] = contrib
;projects[scald_soundcloud][version] = ""

projects[scald_gallery][subdir] = contrib
;projects[scald_gallery][version] = ""

projects[filefield_sources_scald][subdir] = contrib
;projects[filefield_sources_scald][version] = ""

;=== Kstarter features modules ================================================
includes[seo] = makefiles/seo.make
; Feature kpages doesn't need additionnal modules.
includes[edition] = makefiles/edition.make
includes[contextes] = makefiles/contextes.make
includes[development] = makefiles/development.make

;--- Optional -----------------------------------------------------------------
includes[webstats_google] = makefiles/wstatsgoogle.make
;includes[webstats_piwik] = makefiles/wstatspiwik.make
;includes[agenda] = makefiles/agenda.make
;includes[news] = makefiles/news.make

;=== Themes ===================================================================
; Admin themes
includes[adminimal] = makefiles/themes/adminimal.make
;includes[rubik] = makefiles/themes/rubik.make

; Front themes
;-------------
includes[bootstrap] = makefiles/themes/bootstrap.make
;includes[foundation] = makefiles/themes/foundation.make
;includes[omega] = makefiles/themes/omega.make
