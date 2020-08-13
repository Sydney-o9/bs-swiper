type breakpointItem = {
  slidesPerView: float,
  spaceBetween: int
};

type autoplay = {
  delay: int,
  disableOnIteraction: bool
};

module FakeEvent = {
  type t;
  [@bs.get] external data : t => 'a = "";
};

module Swiper = {
  [@bs.module "swiper/react"] [@react.component]
  external make: (
      ~className: string=?,
      ~spaceBetween: int=?, 
      ~slidesPerView: int=?, 
      ~height: int=?, 
      ~onSlideChange: (unit => unit)=?,
      ~onSwiper: (unit => unit)=?,
      ~onTap: ((unit, FakeEvent.t) => unit)=?,
      ~onClick: (unit => unit)=?,
      ~children: React.element,
      ~breakpoints: Js.Dict.t(breakpointItem),
      ~autoplay: autoplay=?
  ) => React.element = "Swiper";
};