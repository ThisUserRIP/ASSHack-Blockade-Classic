#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainUtility_TerrainMap; };
#include "..\mscorlib\System_Collections_Generic_Dictionary_2.h"
#include "UnityEngine_Experimental_TerrainAPI_TerrainUtility.h"
namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI { struct TerrainUtility; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI
{
	struct TerrainUtility_TerrainGroups : mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_TerrainModule::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

