int is_identity(int array[10][10]) {
  bool valid = true;
  for (int r = 0; r < 10; r++) {
    for (int c = 0; c < 10; c++) {
      if ((r == c && array[r][c] != 1) || (r != c && array[r][c] != 0)) {
        valid = false;
      }
    }
  }

  if (valid) {
    return 1;
  } else {
    return 0;
  }
}