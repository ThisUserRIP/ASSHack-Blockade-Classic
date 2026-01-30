#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SkyProfile; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct ISkyModule
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void UpdateForTimeOfDay(Assembly_CSharp::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay);
	};
}

