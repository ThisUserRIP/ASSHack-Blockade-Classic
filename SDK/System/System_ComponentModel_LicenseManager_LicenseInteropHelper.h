#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_LicenseManager.h"
namespace System::System::ComponentModel { struct LicenseManager; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::ComponentModel::Design { struct DesigntimeLicenseContext; };
namespace System::System::ComponentModel { struct LicenseContext; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct LicenseManager_LicenseInteropHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::Design::DesigntimeLicenseContext* helperContext;
		System::ComponentModel::LicenseContext* savedLicenseContext;
		mscorlib::System::Type* savedType;
		struct StaticFields
		{
			int32_t S_OK;
			int32_t E_NOTIMPL;
			int32_t CLASS_E_NOTLICENSED;
			int32_t E_FAIL;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Object* AllocateAndValidateLicense(mscorlib::System::RuntimeTypeHandle rth, intptr_t bstrKey, int32_t fDesignTime);
		static int32_t RequestLicKey(mscorlib::System::RuntimeTypeHandle rth, intptr_t& pbstrKey);
		void GetLicInfo(mscorlib::System::RuntimeTypeHandle rth, int32_t& pRuntimeKeyAvail, int32_t& pLicVerified);
		void GetCurrentContextInfo(int32_t& fDesignTime, intptr_t& bstrKey, mscorlib::System::RuntimeTypeHandle rth);
		void SaveKeyInCurrentContext(intptr_t bstrKey);
		void _ctor();
	};
}

