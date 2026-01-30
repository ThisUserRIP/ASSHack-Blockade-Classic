#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct GameObjectDeformer; };

namespace Assembly_CSharp
{
	struct GizmoScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool pointsSelected;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* vertIndex;
		float GizmoSize;
		void OnDrawGizmos();
		void OnDrawGizmosSelected();
		void AdjustVert();
		Assembly_CSharp::GameObjectDeformer* FindDeeformParent();
		void _ctor();
	};
}

