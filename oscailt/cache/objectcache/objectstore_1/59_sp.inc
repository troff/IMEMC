

<!-- <pagina de newswire obj id 59> -->
<div class='indypage'>


<!-- begin pagina de newswire header -->
<div class='indyheader'>
<table class='indyheader'>
<tr class='indyheader'>
<td class='indyheader'>
<?php $page_style = "banner-left"; ?><?php include("cache/objectcache/objectstore_1/76.inc");?>
</td>
</tr>
<tr class='indyheader'>
<td class='indyheader'>
<?php $page_style = "indyheader"; ?><?php include("cache/objectcache/objectstore_0/46.inc");?>
</td>
</tr>
</table>
</div>
<!-- end pagina de newswire header -->
<?php if($performance_test > 2) markTime("Got Page Header") ?>
<!-- Begin pagina de newswire object id 59 Main body -->
<table class='indypagebody'>
<tr class='indypagebody'>

<!-- begin pagina de newswire leftcolumn -->
<td class='indyleftcolumn'>
<?php $page_style = "indyleftcolumn"; ?><?php include("cache/objectcache/objectstore_0/44.inc");?>
</td>
<!-- end pagina de newswire leftcolumn -->
<?php if($performance_test > 2) markTime("Got Left column") ?>
<!-- begin pagina de newswire object id 59 contents column -->
<td class='indypagebody'>
<?php $page_style = "indypagebody"; ?>
<?php global $suppress_page_insets; if(!$suppress_page_insets){ ?>

<!-- begin pagina de newswire contents inset boxes -->
<?php $page_style = "indypagebody"; ?><?php include("cache/objectcache/objectstore_43/2199.inc");?>
<?php if($performance_test > 2) markTime("Got Inset Boxes") ?><!-- end pagina de newswire contents inset boxes -->
<?php } ?>
<?=$PAGE_CONTENTS?>
         <?php
          global $editor_session, $pseudo_directory_offset;
          if($editor_session->canEditLayout() && ($editor_session->editor->allowedReadAccessTo("editdataobjects") || $editor_session->editor->allowedReadAccessTo("editobjpage", 1)))
          {
          ?>
             
            <a href="<?php echo $pseudo_directory_offset.$OSCAILT_SCRIPT ?>?obj_id=1&amp;obj_type=page&amp;target_id=59&amp;action=edit&amp;site_id=1&amp;obj_language=ot&amp;edit_entry_url=[<?=$_REQUEST["obj_id"]?>][][][][][]"><img hspace=1 border=0  align="right" title="Edit Page Layout [pagina de newswire] Configuration" alt="Edit Page Layout [pagina de newswire] Configuration" src="<?php echo $pseudo_directory_offset?>graphics/mediaicons/32x32/tv.png" /></a>
             
          <?
          }
          ?>
          </td>
<!-- end pagina de newswire contents column -->

<!-- begin pagina de newswire right column -->
<td class='indyrightcolumn'>
<?php $page_style = "indyrightcolumn"; ?><?php include("cache/objectcache/objectstore_0/45.inc");?>
</td>
<!-- end pagina de newswire right column -->
<?php if($performance_test > 2) markTime("Got Right column") ?></tr>
</table>
<!-- End pagina de newswire object id 59 Main body -->
<?php if($performance_test > 2) markTime("Got Main Page Section") ?>

<!-- begin pagina de newswire footer -->
<div class='indyfooter'>
<table class='indyfooter'>
<tr class='indyfooter'>
<td class='indyfooter'>
<?php $page_style = "indyfooter"; ?><?php include("cache/objectcache/objectstore_40/2036.inc");?>
</td>
</tr>
</table>
</div>
<!-- end pagina de newswire footer -->
<?php if($performance_test > 2) markTime("Got Footer Div") ?>
</div>
<!-- </pagina de newswire obj id 59> -->

