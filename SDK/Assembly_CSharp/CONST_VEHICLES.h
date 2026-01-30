#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "CONST.h"
namespace Assembly_CSharp { struct CONST_; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct CONST_VEHICLES : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t NONE;
			int32_t TANKS;
			int32_t JEEP;
			int32_t HELICOPTER;
			int32_t POSITION_NONE;
			int32_t POSITION_JEEP_DRIVER;
			int32_t POSITION_JEEP_GUNNER;
			int32_t POSITION_JEEP_PASS;
			int32_t VEHICLE_TANK_LIGHT;
			int32_t VEHICLE_TANK_MEDIUM;
			int32_t VEHICLE_TANK_HEAVY;
			int32_t VEHICLE_JEEP;
			int32_t VEHICLE_MODUL_TANK_MG;
			int32_t VEHICLE_MODUL_REPAIR_KIT;
			int32_t VEHICLE_MODUL_ANTI_MISSLE;
			int32_t VEHICLE_MODUL_SMOKE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
	};
}

