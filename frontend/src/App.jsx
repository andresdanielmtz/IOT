import { useState } from 'react'
import './App.css'

function App() {
  const [count, setCount] = useState(0)

  return (
    <>
    <div className = "flex justify-between flex-col bg-blue-500"> 

      <h1 className = "text-3xl underline font-bold text-red-500"> Based project </h1> 
      <h2 className = "text-2xl"> This is a very based project, to be honest.</h2> 

      </div>
    </>
  )
}

export default App
