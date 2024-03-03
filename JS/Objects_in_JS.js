let vehicle = {
    wheels: '4',
    fuelType: 'Gasoline',
    color: 'Green'
  }
  let carProps = {
    type: {
      value: 'Volkswagen'
    },
    model: {
      value: 'Golf'
    }
  }
  
  var car = Object.create(vehicle, carProps);
  console.log(car.vehicle);