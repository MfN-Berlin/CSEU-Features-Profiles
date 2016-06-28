<?php
/**
 * @file
 * cseu_features_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cseu_features_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function cseu_features_profiles_default_profile2_type() {
  $items = array();
  $items['cseu_profile_groups_interest'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "cseu_profile_groups_interest",
    "label" : "Working Groups of Interest",
    "weight" : "1",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['cseu_profile_personal'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "cseu_profile_personal",
    "label" : "Personal Information",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  $items['cseu_profile_tasks_interest'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "cseu_profile_tasks_interest",
    "label" : "Tasks of Interest",
    "weight" : "2",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
