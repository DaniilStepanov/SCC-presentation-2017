(
  globals(),
  .str.global=(37,102,0),
  cmp=(x < 0)
)->(BEGIN
<OR>(
  @P cmp=true,
  retval.0=0
),
<OR>(
  @P cmp=false,
  //call=sqrt(x)
  retval.0=call
)
END)->(
  \result_foo=retval.0
)