<?php
/**
 * @file
 * faq_content.features.inc
 */

/**
 * Implements hook_default_asset_type().
 */
function faq_content_default_asset_type() {
  $items = array();
  $items['faq'] = entity_import('asset_type', '{
    "type" : "faq",
    "name" : "FAQ",
    "plural" : "FAQs",
    "data" : { "path" : "admin\\/manage\\/FAQ", "auto_title" : 1, "icon" : "question" },
    "rdf_mapping" : [],
    "public" : false
  }');
  return $items;
}
