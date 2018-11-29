(defun quicksort (list)
  (when list
    (destructuring-bind (p . xs) list
      (let ((lesser (remove-if-not (lambda (x) (< x p)) xs))
            (greater (remove-if-not (lambda (x) (>= x p)) xs)))
        (append (quicksort lesser) (list p) (quicksort greater))))))
