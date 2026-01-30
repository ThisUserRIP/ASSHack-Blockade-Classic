#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_VertexAttribute.h"
#include "UnityEngine_Rendering_VertexAttributeFormat.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct VertexAttributeDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute _attribute_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat _format_k__BackingField;
		int32_t _dimension_k__BackingField;
		int32_t _stream_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute get_attribute();
		void set_attribute(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute value);
		UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat get_format();
		void set_format(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat value);
		int32_t get_dimension();
		void set_dimension(int32_t value);
		int32_t get_stream();
		void set_stream(int32_t value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute attribute, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dimension, int32_t stream);
		mscorlib::System::String* ToString();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor other);
	};
}

