<?php
/**
 * @file
 * dgc_deploy.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dgc_deploy_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:dgc_2015';
  $panelizer->title = 'DGC 2015';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array(
    0 => array(
      'identifier' => 'User',
      'keyword' => 'user',
      'name' => 'user',
      'type' => 'current',
      'uid' => '',
      'id' => 1,
    ),
  );
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'hydra';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'banner' => NULL,
      'overlay' => NULL,
      'headercontent' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'footer_column_1' => NULL,
      'footer_column_2' => NULL,
      'left_header' => NULL,
      'right_header' => NULL,
      'preface' => NULL,
      'left_content' => NULL,
      'right_content' => NULL,
      'footer' => NULL,
      'top_right_content' => NULL,
      'bottom_right_content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2d60e12a-4dcf-47e5-9c92-1fcfb6872172';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b7f97f39-e53f-4356-8dea-f36c0e63ad6b';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'cod_session_tracks-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'machine_name' => 'session_tracks_%node:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b7f97f39-e53f-4356-8dea-f36c0e63ad6b';
    $display->content['new-b7f97f39-e53f-4356-8dea-f36c0e63ad6b'] = $pane;
    $display->panels['footer'][0] = 'new-b7f97f39-e53f-4356-8dea-f36c0e63ad6b';
    $pane = new stdClass();
    $pane->pid = 'new-d8a15e90-c296-4f34-8855-56168f2aabb9';
    $pane->panel = 'footer';
    $pane->type = 'views';
    $pane->subtype = 'cod_sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'context' => array(
        0 => 'panelizer.nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd8a15e90-c296-4f34-8855-56168f2aabb9';
    $display->content['new-d8a15e90-c296-4f34-8855-56168f2aabb9'] = $pane;
    $display->panels['footer'][1] = 'new-d8a15e90-c296-4f34-8855-56168f2aabb9';
    $pane = new stdClass();
    $pane->pid = 'new-4bc6da4d-dc2c-490f-bc69-4b740e4a4c98';
    $pane->panel = 'left_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'cod_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'arguments' => array(
        'gid' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4bc6da4d-dc2c-490f-bc69-4b740e4a4c98';
    $display->content['new-4bc6da4d-dc2c-490f-bc69-4b740e4a4c98'] = $pane;
    $display->panels['left_content'][0] = 'new-4bc6da4d-dc2c-490f-bc69-4b740e4a4c98';
    $pane = new stdClass();
    $pane->pid = 'new-586372f3-66e2-4f9a-aa96-2d42d019fe6b';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '586372f3-66e2-4f9a-aa96-2d42d019fe6b';
    $display->content['new-586372f3-66e2-4f9a-aa96-2d42d019fe6b'] = $pane;
    $display->panels['preface'][0] = 'new-586372f3-66e2-4f9a-aa96-2d42d019fe6b';
    $pane = new stdClass();
    $pane->pid = 'new-3c19f033-fd9f-4164-84fd-fcd4f4787913';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'date_no_time',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c19f033-fd9f-4164-84fd-fcd4f4787913';
    $display->content['new-3c19f033-fd9f-4164-84fd-fcd4f4787913'] = $pane;
    $display->panels['preface'][1] = 'new-3c19f033-fd9f-4164-84fd-fcd4f4787913';
    $pane = new stdClass();
    $pane->pid = 'new-92f522dc-f620-443a-8ac4-c8baa4640cb8';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '92f522dc-f620-443a-8ac4-c8baa4640cb8';
    $display->content['new-92f522dc-f620-443a-8ac4-c8baa4640cb8'] = $pane;
    $display->panels['preface'][2] = 'new-92f522dc-f620-443a-8ac4-c8baa4640cb8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:dgc_2015'] = $panelizer;

  return $export;
}