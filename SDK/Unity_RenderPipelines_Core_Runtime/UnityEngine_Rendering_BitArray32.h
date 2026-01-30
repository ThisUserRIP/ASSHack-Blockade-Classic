#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct IBitArray; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct BitArray32
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t data;
		uint32_t get_capacity();
		bool get_allFalse();
		bool get_allTrue();
		mscorlib::System::String* get_humanizedVersion();
		mscorlib::System::String* get_humanizedData();
		bool get_Item(uint32_t index);
		void set_Item(uint32_t index, bool value);
		void _ctor(uint32_t initValue);
		void _ctor(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::UInt32>* bitIndexTrue);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* BitAnd(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* other);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* BitOr(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* other);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* BitNot();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 op_OnesComplement(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 a);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 op_BitwiseOr(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 b);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 op_BitwiseAnd(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 b);
		static bool op_Equality(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 b);
		static bool op_Inequality(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32 b);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
	bool operator==(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32& a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32& b);
	bool operator!=(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32& a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray32& b);
}

