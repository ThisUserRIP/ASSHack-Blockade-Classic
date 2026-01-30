#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "BestHTTP_Extensions_BufferStore.h"
namespace Assembly_CSharp::BestHTTP::Extensions { struct BufferStore; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace System_Core::System::Threading { struct ReaderWriterLockSlim; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "BestHTTP_Extensions_BufferDesc.h"
namespace Assembly_CSharp::BestHTTP::Extensions { struct BufferDesc; };

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct VariableSizedBufferPool : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* NoData;
			bool _isEnabled;
			mscorlib::System::TimeSpan RemoveOlderThan;
			mscorlib::System::TimeSpan RunMaintenanceEvery;
			int64_t MinBufferSize;
			int64_t MaxBufferSize;
			int64_t MaxPoolSize;
			bool RemoveEmptyLists;
			bool IsDoubleReleaseCheckEnabled;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::BufferStore>* FreeBuffers;
			mscorlib::System::DateTime lastMaintenance;
			int64_t PoolSize;
			int64_t GetBuffers;
			int64_t ReleaseBuffers;
			mscorlib::System::Text::StringBuilder* statiscticsBuilder;
			System_Core::System::Threading::ReaderWriterLockSlim* rwLock;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_IsEnabled();
		static void set_IsEnabled(bool value);
		static void _cctor();
		static IL2CPP::Array<uint8_t>* Get(int64_t size, bool canBeLarger);
		static void Release(mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::Byte>>* buffers);
		static void Release(IL2CPP::Array<uint8_t>* buffer);
		static IL2CPP::Array<uint8_t>* Resize(IL2CPP::Array<uint8_t>& buffer, int32_t newSize, bool canBeLarger);
		static mscorlib::System::String* GetStatistics(bool showEmptyBuffers);
		static void Clear();
		static void Maintain();
		static bool IsPowerOfTwo(int64_t x);
		static int64_t NextPowerOf2(int64_t x);
		static Assembly_CSharp::BestHTTP::Extensions::BufferDesc FindFreeBuffer(int64_t size, bool canBeLarger);
		static void AddFreeBuffer(IL2CPP::Array<uint8_t>* buffer);
	};
}

