Pod::Spec.new do |s|

  s.name         = "MNKDraggableDroppable"
  s.version      = "0.0.3"
  s.summary      = "MNKDraggableDroppable provides a drag and drop API on iOS."

  s.description  = <<-DESC
MNKDraggableDroppable provides a drag and drop API for iOS.

A draggable view can be moved with user interaction. A droppable view provides an area in which a draggable view can be dropped. MNKDraggableDroppable allows you to identify a view as a draggable or droppable, and provides a mechanism for responding to events involving the two.
DESC

  s.homepage     = "https://github.com/adamwaite/MNKDraggableDroppable"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }

  s.author             = { "Adam Waite" => "adam@adamjwaite.co.uk" }
  s.social_media_url = "http://twitter.com/AdamWaite"

  s.platform     = :ios
  s.platform     = :ios, '7.0'

  s.source       = { :git => "https://github.com/adamwaite/MNKDraggableDroppable.git", tag: "unreleased" }
  s.source_files  = 'MNKDraggableDroppable', 'MNKDraggableDroppable/**/*.{h,m}'
  s.public_header_files = 'MNKDraggableDroppable/MNKDraggableDroppable.h'
  s.requires_arc = true

end