#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2Int; };
namespace Assembly_CSharp { struct BlockSet; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct MapTestGenerator : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2Int mlx;
		UnityEngine_CoreModule::UnityEngine::Vector2Int mly;
		UnityEngine_CoreModule::UnityEngine::Vector2Int mlz;
		Assembly_CSharp::BlockSet* TestBlockSet;
		int32_t tmpX;
		int32_t tmpY;
		int32_t tmpZ;
		float scale;
		mscorlib::System::Collections::IEnumerator* Start();
		int32_t GetTerrainHeight(int32_t x, int32_t z);
		void OnGUI();
		void _ctor();
	};
}

