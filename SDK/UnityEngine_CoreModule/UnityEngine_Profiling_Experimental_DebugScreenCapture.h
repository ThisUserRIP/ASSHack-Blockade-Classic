#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "UnityEngine_TextureFormat.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine::Profiling::Experimental
{
	struct DebugScreenCapture
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Byte> _rawImageDataReference_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::TextureFormat _imageFormat_k__BackingField;
		int32_t _width_k__BackingField;
		int32_t _height_k__BackingField;
		void set_rawImageDataReference(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Byte> value);
		void set_imageFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat value);
		void set_width(int32_t value);
		void set_height(int32_t value);
	};
}

