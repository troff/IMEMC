<?php global $pseudo_directory_offset; $site_file_store = $pseudo_directory_offset."attachments/sites/default/"; 
$oscailt_page_setting = Array("site_module_settings" => Array("siteobject" => "1", "newswireobject" => "2126", "articleobject" => "53", "featureobject" => "54", "galleryobject" => "64", "searchobject" => "2212", "archiveobject" => "55", "contactobject" => "84", "commentsobject" => "", "publishobject" => "57", "eventsobject" => "58"), "site_mail_settings" => Array("to" => "news@imemc.org", "from" => "site@imemc.org", "subject_prefix" => "Article edit:", "replyto" => "news@imemc.org", "level" => "none"), "site_filters" => Array("topic" => Array("0" => "*"), "region" => Array("0" => "20", "1" => "19", "2" => "18", "3" => "17", "4" => "16", "5" => "15", "6" => "14", "7" => "13", "8" => "12", "9" => "11", "10" => "10", "11" => "9", "12" => "8", "13" => "7", "14" => "6", "15" => "5", "16" => "4", "17" => "3", "18" => "2", "19" => "1"), "language" => Array("0" => "en"), "type" => Array("0" => "*"), "author" => ""), "obj_id" => "2119", "obj_type" => "NEWSWIRE", "site_id" => "1", "page_filters" => Array("topic" => Array("0" => "75", "1" => "74", "2" => "73", "3" => "72", "4" => "71", "5" => "70", "6" => "69", "7" => "68", "8" => "64", "9" => "63", "10" => "62", "11" => "61", "12" => "60", "13" => "59", "14" => "58", "15" => "57", "16" => "56", "17" => "65", "18" => "66", "19" => "67"), "type" => Array("0" => "17"), "author" => Array("0" => "")));
$oscailt_story_query = new StoryQuery();
$oscailt_story_query->loadFormValues();
$PAGE_LAYOUT_ID = 59; ?>
<?
         addToPageDescription("The IMEMC is a media collective. We are independent journalists producing and distributing the authentic voices of the people.  We are located in Beit Sahour, in the Occupied West Bank, and we welcome new volunteers and contributors.");
      addToPageTitle("Noticias De Ultima Hora");
         addToPageDescription("This newswire lists the latest incidents, the breaking news."); ?>

<!-- <Noticias de ultima hora obj id 2119> -->
<?php require_once "objects/indyruntime/newswiredisplay.inc";

         $site_module = new newswireDisplay(2119);
         $site_module->setFilters(Array("75", "74", "73", "72", "71", "70", "69", "68", "64", "63", "62", "61", "60", "59", "58", "57", "56", "65", "66", "67"), Array(), Array(), Array("17"), Array(""));
         $object_display_settings = (Array("siteobject" => "1", "newswireobject" => "2126", "articleobject" => "53", "featureobject" => "54", "galleryobject" => "64", "searchobject" => "2212", "archiveobject" => "55", "contactobject" => "84", "commentsobject"=> "0", "publishobject" => "57", "eventsobject" => "58"));
         $site_module->setSiteSettings($object_display_settings);
      $site_module->setAdminOptions(Array("title" => "Noticias de ultima hora", "header" => "", "footer" => "", "emptyresultmsg" => "no breaking news at the moment", "read_more_text" => "", "filter_author" => "", "editor_note_text" => "", "self_link_text" => "", "relatedlink_text" => "", "promoted" => "false", "ignorehidden" => "false", "respectsticky" => "true", "allowmultis" => Array("0" => "clip", "1" => "unstick", "2" => "hide", "3" => "unhide")));
	$site_module->setUserOptions(Array("pagelimit" => "15", "storydate_format" => "%a %b %d, %Y", "video_mode" => "", "hiddenonly" => "false", "nohidden" => "false", "lockedonly" => "false", "nolocked" => "false", "nosticky" => "false", "stickyonly" => "false", "upcomingevents" => "false", "statusonly" => "false", "includeicons" => "false", "includephoto" => "false", "showhidden" => "true", "showlocked" => "true", "showsticky" => "true", "showstatus" => "false", "usestatusicons" => "true", "includerelatedlink" => "false", "include_embed_video" => "false", "include_embed_audio" => "false", "usealternatestyles" => "false", "include_translations" => "false", "headernavigation" => Array("0" => "context"), "footernavigation" => Array("0" => "prevnext", "1" => "otherviews"), "subtitledetails" => Array("0" => "context", "1" => "date"), "enddetails" => Array(), "time_posted_lower_limit" => "1417219140", "time_posted_upper_limit" => "0"));

         $site_module->processRequest();
       ?>
<!-- </Noticias de ultima hora obj id 2119> -->

<?php getPageLanguageOptions("ot", Array("0" => "en", "1" => "sp"), "2119"); ?>
         <?php
          global $editor_session, $pseudo_directory_offset;
          if($editor_session->canEditLayout() && ($editor_session->editor->allowedReadAccessTo("editdataobjects") || $editor_session->editor->allowedReadAccessTo("editobjnewswire", 1)))
          {
          ?>
             <br>
            <a href="<?php echo $pseudo_directory_offset.$OSCAILT_SCRIPT ?>?obj_id=1&amp;obj_type=newswire&amp;target_id=2119&amp;action=edit&amp;site_id=1&amp;obj_language=ot&amp;edit_entry_url=[<?=$_REQUEST["obj_id"]?>][][][][][]"><img hspace=1 border=0  align="left" title="Edit Newswire Module [Noticias de ultima hora] Configuration" alt="Edit Newswire Module [Noticias de ultima hora] Configuration" src="<?php echo $pseudo_directory_offset?>graphics/mediaicons/32x32/print.png" /></a>
             
          <?
          }
          ?>
          