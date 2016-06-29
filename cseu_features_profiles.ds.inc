<?php
/**
 * @file
 * cseu_features_profiles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cseu_features_profiles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'profile2|cseu_profile_personal|default';
  $ds_fieldsetting->entity_type = 'profile2';
  $ds_fieldsetting->bundle = 'cseu_profile_personal';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_cseu_institution' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['profile2|cseu_profile_personal|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cseu_features_profiles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|cseu_profile_personal|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'cseu_profile_personal';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cseu_title',
        1 => 'field_cseu_first_name',
        2 => 'field_cseu_last_name',
        3 => 'field_cseu_institution',
        4 => 'field_cseu_telephone',
        5 => 'field_cseu_url',
        6 => 'field_cseu_facebook',
        7 => 'field_cseu_twitter',
        8 => 'field_cseu_area_expertise',
        9 => 'field_cseu_year_completion_phd',
        10 => 'field_cseu_gender',
      ),
    ),
    'fields' => array(
      'field_cseu_title' => 'ds_content',
      'field_cseu_first_name' => 'ds_content',
      'field_cseu_last_name' => 'ds_content',
      'field_cseu_institution' => 'ds_content',
      'field_cseu_telephone' => 'ds_content',
      'field_cseu_url' => 'ds_content',
      'field_cseu_facebook' => 'ds_content',
      'field_cseu_twitter' => 'ds_content',
      'field_cseu_area_expertise' => 'ds_content',
      'field_cseu_year_completion_phd' => 'ds_content',
      'field_cseu_gender' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['profile2|cseu_profile_personal|default'] = $ds_layout;

  return $export;
}
