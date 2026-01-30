#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct BlockSet; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct Block; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct BlockSetViewer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BlockSet* blockSet;
		int32_t index;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition;
		void SetBlockSet(Assembly_CSharp::BlockSet* blockSet);
		void BuildBlock(Assembly_CSharp::Block* block);
		void OnGUI();
		static int32_t DrawList(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t selected, IL2CPP::Array<Assembly_CSharp::Block*>* list, UnityEngine_CoreModule::UnityEngine::Vector2& scrollPosition);
		static bool DrawItem(Assembly_CSharp::Block* block, bool selected);
		void _ctor();
	};
}

