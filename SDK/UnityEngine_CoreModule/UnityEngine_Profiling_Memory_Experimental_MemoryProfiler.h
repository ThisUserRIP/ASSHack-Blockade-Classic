#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "UnityEngine_Profiling_Experimental_DebugScreenCapture.h"
namespace UnityEngine_CoreModule::UnityEngine::Profiling::Experimental { struct DebugScreenCapture; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
namespace UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental { struct MetaData; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_TextureFormat.h"

namespace UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental
{
	struct MemoryProfiler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_2<mscorlib::System::String, mscorlib::System::Boolean>* m_SnapshotFinished;
			mscorlib::System::Action_3<mscorlib::System::String, mscorlib::System::Boolean, UnityEngine_CoreModule::UnityEngine::Profiling::Experimental::DebugScreenCapture>* m_SaveScreenshotToDisk;
			mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Profiling::Memory::Experimental::MetaData>* createMetaData;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<uint8_t>* PrepareMetadata();
		static int32_t WriteIntToByteArray(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t value);
		static int32_t WriteStringToByteArray(IL2CPP::Array<uint8_t>* array, int32_t offset, mscorlib::System::String* value);
		static void FinalizeSnapshot(mscorlib::System::String* path, bool result);
		static void SaveScreenshotToDisk(mscorlib::System::String* path, bool result, intptr_t pixelsPtr, int32_t pixelsCount, UnityEngine_CoreModule::UnityEngine::TextureFormat format, int32_t width, int32_t height);
	};
}

