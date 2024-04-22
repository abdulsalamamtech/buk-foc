-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 17, 2023 at 06:56 PM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `asibiti`
--

-- --------------------------------------------------------

--
-- Table structure for table `l`
--

CREATE TABLE `l` (
  `col1` int(6) NOT NULL,
  `col2` int(5) NOT NULL,
  `col3` int(5) NOT NULL,
  `col4` int(5) NOT NULL,
  `col5` varchar(255) NOT NULL,
  `col6` varchar(255) NOT NULL,
  `col7` int(5) NOT NULL,
  `col8` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `l`
--

INSERT INTO `l` (`col1`, `col2`, `col3`, `col4`, `col5`, `col6`, `col7`, `col8`) VALUES
(0, 71, 11, 63, '2022-12-27', '03:50', 0, '1672059143'),
(0, 72, 11, 62, '2022-12-30', '16:36', 0, '1672317384');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
