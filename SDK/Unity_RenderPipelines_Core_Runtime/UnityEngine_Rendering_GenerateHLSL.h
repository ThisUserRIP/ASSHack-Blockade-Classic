#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "UnityEngine_Rendering_PackingRules.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct GenerateHLSL : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PackingRules packingRules;
		bool containsPackedFields;
		bool needAccessors;
		bool needSetters;
		bool needParamDebug;
		int32_t paramDefinesStart;
		bool omitStructDeclaration;
		bool generateCBuffer;
		int32_t constantRegister;
		void _ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PackingRules rules, bool needAccessors, bool needSetters, bool needParamDebug, int32_t paramDefinesStart, bool omitStructDeclaration, bool containsPackedFields, bool generateCBuffer, int32_t constantRegister);
	};
}

