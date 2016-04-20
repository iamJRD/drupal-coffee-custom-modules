<?php
/**
 * @file
 * coffee_imports.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function coffee_imports_contact_categories_defaults() {
  return array(
    'Bulk Coffee Orders' => array(
      'category' => 'Bulk Coffee Orders',
      'recipients' => 'nforfirebase@gmail.com',
      'reply' => 'Thanks for your order. It should ship within the week. We will contact you if anything changes.',
      'weight' => 0,
      'selected' => 0,
    ),
  );
}
