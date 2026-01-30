#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_UI::UnityEngine::UI { struct StencilMaterial_MatEntry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_StencilOp.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_CompareFunction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ColorWriteMask.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct StencilMaterial : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::StencilMaterial_MatEntry>* m_List;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Material* Add(UnityEngine_CoreModule::UnityEngine::Material* baseMat, int32_t stencilID);
		static UnityEngine_CoreModule::UnityEngine::Material* Add(UnityEngine_CoreModule::UnityEngine::Material* baseMat, int32_t stencilID, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp operation, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine_CoreModule::UnityEngine::Rendering::ColorWriteMask colorWriteMask);
		static UnityEngine_CoreModule::UnityEngine::Material* Add(UnityEngine_CoreModule::UnityEngine::Material* baseMat, int32_t stencilID, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp operation, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine_CoreModule::UnityEngine::Rendering::ColorWriteMask colorWriteMask, int32_t readMask, int32_t writeMask);
		static void Remove(UnityEngine_CoreModule::UnityEngine::Material* customMat);
		static void ClearAll();
		static void _cctor();
	};
}

