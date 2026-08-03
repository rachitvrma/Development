((c-mode . ((eval . (progn
  (let* ((file (file-name-nondirectory buffer-file-name))
         (bin (file-name-sans-extension file)))
    (setq-local compile-command
                (format "make %s && ./%s" bin bin))))))))
