<?php
// $Id$

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 */
?>

  <!-- <div id="page"> -->
          
<header id="page-header">
  <div class="wrapper">
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
      <h1 id="site-name">
        <?php print $site_name_a; ?>
      </h1>
      <h2 id="site-subtitle">
        <?php print $site_name_b; ?>
      </h2>
    </a>
    <?php print render($page['header']); ?>
  </div>
</header>

<nav id='main-nav' role="navigation">
  <h1>Navigation</h1>
  <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
  <!-- <ul>
      <li><a href="#page-header">Top</a></li>
      <li><a href="#intro">Intro</a></li>
      <li><a href="#learn">Learn</a></li>
      <li><a href="#tools">Tools</a></li>
      <li><a href="#survivors">Survivors</a></li>
      <li><a href="#prepared">Be Prepared</a></li>
    </ul> -->
</nav>

<div id="page-tools">
  <?php print render($page['highlighted']); ?>
  <?php if ($tabs = render($tabs)): ?><div class="tabs"><?php print $tabs; ?></div><?php endif; ?>
  <?php print render($page['help']); ?>
  <?php if ($action_links = render($action_links)): ?><ul class="action-links"><?php print $action_links; ?></ul><?php endif; ?>
</div>
      
<?php /* if ($breadcrumb): ?>
  <nav id="breadcrumb"><?php print $breadcrumb; ?></nav>
<?php endif; */ ?>

<?php print $messages; ?>

<div role="main">
  <div class="inner">
    <a id="main-content"></a>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php print render($page['content']); ?>
    <?php print $feed_icons; ?>
  </div>
</div> <!-- /main -->




      <?php print render($page['sidebar_first']); ?>

      <?php print render($page['sidebar_second']); ?>


    <?php print render($page['footer']); ?>

  <!-- </div>  --><!-- /#page -->
