#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_UI::UnityEngine::UI { struct VertexHelper; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct IMeshModifier
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void ModifyMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh);
		void ModifyMesh(UnityEngine_UI::UnityEngine::UI::VertexHelper* verts);
	};
}

