<?php
/**
 * @file
 * coffee_imports.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function coffee_imports_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create coffee_imports content'.
  $permissions['create coffee_imports content'] = array(
    'name' => 'create coffee_imports content',
    'roles' => array(
      'moderator' => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any coffee_imports content'.
  $permissions['delete any coffee_imports content'] = array(
    'name' => 'delete any coffee_imports content',
    'roles' => array(
      'moderator' => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own coffee_imports content'.
  $permissions['delete own coffee_imports content'] = array(
    'name' => 'delete own coffee_imports content',
    'roles' => array(
      'moderator' => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any coffee_imports content'.
  $permissions['edit any coffee_imports content'] = array(
    'name' => 'edit any coffee_imports content',
    'roles' => array(
      'moderator' => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own coffee_imports content'.
  $permissions['edit own coffee_imports content'] = array(
    'name' => 'edit own coffee_imports content',
    'roles' => array(
      'moderator' => 'moderator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
