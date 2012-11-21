<?php
/**
 * @file
 * features_hcam.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function features_hcam_taxonomy_default_vocabularies() {
  return array(
    'newsletter' => array(
      'name' => 'Newsletter',
      'machine_name' => 'newsletter',
      'description' => NULL,
      'hierarchy' => '0',
      'module' => 'simplenews',
      'weight' => '0',
    ),
    'vocabulary_4' => array(
      'name' => 'Category',
      'machine_name' => 'vocabulary_4',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
