<?php
/**
 * @file
 * cseu_features_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cseu_features_profiles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cseu_contact_details|profile2|cseu_profile_personal|form';
  $field_group->group_name = 'group_cseu_contact_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'cseu_profile_personal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '6',
    'children' => array(
      0 => 'field_cseu_telephone',
      1 => 'field_cseu_url',
      2 => 'field_cseu_facebook',
      3 => 'field_cseu_twitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cseu-contact-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cseu_contact_details|profile2|cseu_profile_personal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cseu_organization_details|profile2|cseu_profile_personal|form';
  $field_group->group_name = 'group_cseu_organization_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'cseu_profile_personal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '0',
    'children' => array(
      0 => 'field_cseu_institution',
      1 => 'field_cseu_area_expertise',
      2 => 'field_cseu_year_completion_phd',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organization',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cseu-organization-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cseu_organization_details|profile2|cseu_profile_personal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cseu_personal_details|profile2|cseu_profile_personal|form';
  $field_group->group_name = 'group_cseu_personal_details';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'cseu_profile_personal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_cseu_title',
      1 => 'field_cseu_first_name',
      2 => 'field_cseu_last_name',
      3 => 'field_cseu_gender',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cseu-personal-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cseu_personal_details|profile2|cseu_profile_personal|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Details');
  t('Organization');
  t('Personal Information');

  return $field_groups;
}
