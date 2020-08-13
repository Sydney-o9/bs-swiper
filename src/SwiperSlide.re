  [@bs.module "swiper/react"] [@react.component]
  external make: (
      ~className: string=?,
      ~children: React.element
    ) => React.element =
    "SwiperSlide";