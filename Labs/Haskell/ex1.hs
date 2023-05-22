isEven2 :: Int -> Bool
isEven2 = even

main :: IO ()
main = do
  let num = 10
  putStrLn $ "Is " ++ show num ++ " even? " ++ show (isEven2 num)
