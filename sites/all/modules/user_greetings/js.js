//Need to write 'jQuery' at the beginning since drupal doesn't recognize '$'. Then pass through a '$' in the function so that
//jQuery recognizes it within the document object. All you need to do to implement jQuery is write 'scripts[] = js_file_name.js'
//in the module.info file, and set it equal to your js file within the same module folder. It should work!
jQuery(document).ready(function($) {
    $('#box').click(function() {
        alert('hi');
    });
});
