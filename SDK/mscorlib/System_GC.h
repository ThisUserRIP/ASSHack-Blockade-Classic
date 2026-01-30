#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Runtime_CompilerServices_Ephemeron.h"
namespace mscorlib::System::Runtime::CompilerServices { struct Ephemeron; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System
{
	struct GC : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Object* EPHEMERON_TOMBSTONE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t GetCollectionCount(int32_t generation);
		static int32_t GetMaxGeneration();
		static void InternalCollect(int32_t generation);
		static void RecordPressure(int64_t bytesAllocated);
		static void register_ephemeron_array(IL2CPP::Array<mscorlib::System::Runtime::CompilerServices::Ephemeron>* array);
		static mscorlib::System::Object* get_ephemeron_tombstone();
		static void AddMemoryPressure(int64_t bytesAllocated);
		static void RemoveMemoryPressure(int64_t bytesAllocated);
		static void Collect();
		static int32_t CollectionCount(int32_t generation);
		static void KeepAlive(mscorlib::System::Object* obj);
		static int32_t get_MaxGeneration();
		static void _SuppressFinalize(mscorlib::System::Object* o);
		static void SuppressFinalize(mscorlib::System::Object* obj);
		static void _ReRegisterForFinalize(mscorlib::System::Object* o);
		static void ReRegisterForFinalize(mscorlib::System::Object* obj);
		static int64_t GetTotalMemory(bool forceFullCollection);
		static void _cctor();
	};
}

