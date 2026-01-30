#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_RectInt.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectInt; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct TileLayoutUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool TryLayoutByTiles(UnityEngine_CoreModule::UnityEngine::RectInt src, uint32_t tileSize, UnityEngine_CoreModule::UnityEngine::RectInt& main, UnityEngine_CoreModule::UnityEngine::RectInt& topRow, UnityEngine_CoreModule::UnityEngine::RectInt& rightCol, UnityEngine_CoreModule::UnityEngine::RectInt& topRight);
		static bool TryLayoutByRow(UnityEngine_CoreModule::UnityEngine::RectInt src, uint32_t tileSize, UnityEngine_CoreModule::UnityEngine::RectInt& main, UnityEngine_CoreModule::UnityEngine::RectInt& other);
		static bool TryLayoutByCol(UnityEngine_CoreModule::UnityEngine::RectInt src, uint32_t tileSize, UnityEngine_CoreModule::UnityEngine::RectInt& main, UnityEngine_CoreModule::UnityEngine::RectInt& other);
	};
}

