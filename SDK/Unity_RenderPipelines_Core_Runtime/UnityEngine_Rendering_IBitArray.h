#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct IBitArray
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t get_capacity();
		bool get_allFalse();
		bool get_allTrue();
		bool get_Item(uint32_t index);
		void set_Item(uint32_t index, bool value);
		mscorlib::System::String* get_humanizedData();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* BitAnd(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* other);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* BitOr(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* other);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* BitNot();
	};
}

