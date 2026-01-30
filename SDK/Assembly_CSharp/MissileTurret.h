#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Vehicle.h"
namespace Assembly_CSharp { struct MissileTurretData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct MissileTurret : Assembly_CSharp::Vehicle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::MissileTurretData* missileTurretData;
		void InitializeSpecific();
		void UpdateSpecific();
		void _ctor();
	};
}

