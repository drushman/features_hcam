<?php
/**
 * @file
 * features_hcam.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function features_hcam_default_rules_configuration() {
  $items = array();
  $items['rules_notify_when_created_new_cancellation'] = entity_import('rules_config', '{ "rules_notify_when_created_new_cancellation" : {
      "LABEL" : "Notify when created new cancellation",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "hcam" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "cancellation" : "cancellation" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "cancel@hcam.tv",
            "subject" : "Cancellation notice created by [node:author]",
            "message" : "This is a notification that [node:author] has created a cancellation notice  -[node:title]\\\\n\\\\n[node:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_when_created_new_slideshow'] = entity_import('rules_config', '{ "rules_notify_when_created_new_slideshow" : {
      "LABEL" : "Notify when created new slideshow",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "hcam" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "slideshow" : "slideshow" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "\\u003Cnews@hcam.tv\\u003E,\\u003Cmichelle@hcam.tv\\u003E",
            "subject" : "New Slideshow created by [node:author]",
            "message" : "This is a notification that [node:author] has created a slideshow image content -[node:title]\\\\n\\\\n[node:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
