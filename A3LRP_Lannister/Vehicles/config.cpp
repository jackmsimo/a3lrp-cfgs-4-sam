class CfgPatches
{
	class A3LRP_Donation_Vehicles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
		version="2018-01-24";
	};
};


class cfgVehicles 
{	
	class ALRP_Mustang;
	class MercG65;
	#include "\A3LRP_Lannister\Vehicles\MercG65\config.hpp"
	#include "\A3LRP_Lannister\Vehicles\FordMustang\config.hpp"
};