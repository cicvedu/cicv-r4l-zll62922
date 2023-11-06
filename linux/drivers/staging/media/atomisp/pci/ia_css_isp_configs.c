// SPDX-License-Identifier: GPL-2.0
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

/* Generated code: do not edit or commmit. */

#define IA_CSS_INCLUDE_CONFIGURATIONS
#include "ia_css_pipeline.h"
#include "ia_css_isp_configs.h"
#include "ia_css_debug.h"
#include "assert_support.h"

int ia_css_configure_iterator(const struct ia_css_binary *binary,
			      const struct ia_css_iterator_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.iterator.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.iterator.offset;

	ia_css_iterator_config((struct sh_css_isp_iterator_isp_config *)
			       &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			       config_dmem, size);
	return 0;
}

int ia_css_configure_copy_output(const struct ia_css_binary *binary,
				 const struct ia_css_copy_output_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.copy_output.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.copy_output.offset;

	ia_css_copy_output_config((struct sh_css_isp_copy_output_isp_config *)
				  &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
				  config_dmem, size);
	return 0;
}

/* Code generated by genparam/genconfig.c:gen_configure_function() */

int ia_css_configure_crop(const struct ia_css_binary *binary,
			  const struct ia_css_crop_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.crop.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.crop.offset;

	ia_css_crop_config((struct sh_css_isp_crop_isp_config *)
			   &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			   config_dmem, size);
	return 0;
}

int ia_css_configure_fpn(const struct ia_css_binary *binary,
			 const struct ia_css_fpn_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size   = binary->info->mem_offsets.offsets.config->dmem.fpn.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.fpn.offset;
	ia_css_fpn_config((struct sh_css_isp_fpn_isp_config *)
			  &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			  config_dmem, size);
	return 0;
}

int ia_css_configure_dvs(const struct ia_css_binary *binary,
			 const struct ia_css_dvs_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.dvs.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.dvs.offset;
	ia_css_dvs_config((struct sh_css_isp_dvs_isp_config *)
			  &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			  config_dmem, size);
	return 0;
}

int ia_css_configure_qplane(const struct ia_css_binary *binary,
			    const struct ia_css_qplane_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.qplane.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.qplane.offset;
	ia_css_qplane_config((struct sh_css_isp_qplane_isp_config *)
			     &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			     config_dmem, size);

	return 0;
}

int ia_css_configure_output0(const struct ia_css_binary *binary,
			     const struct ia_css_output0_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.output0.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.output0.offset;

	ia_css_output0_config((struct sh_css_isp_output_isp_config *)
			      &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			      config_dmem, size);
	return 0;
}

int ia_css_configure_output1(const struct ia_css_binary *binary,
			     const struct ia_css_output1_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.output1.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.output1.offset;

	ia_css_output1_config((struct sh_css_isp_output_isp_config *)
			      &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			      config_dmem, size);
	return 0;
}

int ia_css_configure_output(const struct ia_css_binary *binary,
			    const struct ia_css_output_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.output.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.output.offset;

	ia_css_output_config((struct sh_css_isp_output_isp_config *)
			     &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
					     config_dmem, size);
	return 0;
}

int ia_css_configure_raw(const struct ia_css_binary *binary,
			 const struct ia_css_raw_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.raw.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.raw.offset;

	ia_css_raw_config((struct sh_css_isp_raw_isp_config *)
			  &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			  config_dmem, size);
	return 0;
}

int ia_css_configure_tnr(const struct ia_css_binary *binary,
			 const struct ia_css_tnr_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.tnr.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.tnr.offset;

	ia_css_tnr_config((struct sh_css_isp_tnr_isp_config *)
			  &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			  config_dmem, size);
	return 0;
}

int ia_css_configure_ref(const struct ia_css_binary *binary,
			 const struct ia_css_ref_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.ref.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.ref.offset;

	ia_css_ref_config((struct sh_css_isp_ref_isp_config *)
			  &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			  config_dmem, size);
	return 0;
}

int ia_css_configure_vf(const struct ia_css_binary *binary,
			const struct ia_css_vf_configuration *config_dmem)
{
	unsigned int offset = 0;
	unsigned int size   = 0;

	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE, "%s:\n", __func__);

	if (!binary->info->mem_offsets.offsets.config)
		return 0;

	size = binary->info->mem_offsets.offsets.config->dmem.vf.size;
	if (!size)
		return 0;

	offset = binary->info->mem_offsets.offsets.config->dmem.vf.offset;

	ia_css_vf_config((struct sh_css_isp_vf_isp_config *)
			 &binary->mem_params.params[IA_CSS_PARAM_CLASS_CONFIG][IA_CSS_ISP_DMEM].address[offset],
			 config_dmem, size);
	return 0;
}
