/******************************************************************************

                  版权所有 (C), 2001-2014, 华为技术有限公司

 ******************************************************************************
  文 件 名   : omlist.c
  版 本 号   : 初稿
  作    者   : g00256031
  生成日期   : 2015年09月16日
  功能描述   : OM链表维护
  函数列表   :
  修改历史   :
  1.日    期   : 2015年09月16日
    作    者   : g00256031
    修改内容   : 创建文件
******************************************************************************/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "omlist.h"


#ifdef  __cplusplus
#if  __cplusplus
extern "C"{
#endif
#endif

/*****************************************************************************
  2 全局变量定义
*****************************************************************************/

/*****************************************************************************
  3 函数定义
*****************************************************************************/

/*****************************************************************************
 函 数 名  : OM_InitNodeHeader
 功能描述  : 获取XPDS pde状态机的大小
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_UINT32:状态机的大小
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年08月21日
    作    者   : x00314862
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID OM_InitNodeHead(
    OM_LIST_NODE_STRU                  *pstNode
)
{
    pstNode->pstNext = pstNode;
    pstNode->pstPrev = pstNode;
}

/*****************************************************************************
 函 数 名  : OM_AddNodeToListTail
 功能描述  : 获取XPDS pde状态机的大小
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_UINT32:状态机的大小
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年08月21日
    作    者   : x00314862
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID OM_AddNodeToList(
    OM_LIST_NODE_STRU                  *pstNewNode,
    OM_LIST_NODE_STRU                  *pstPrevNode,
    OM_LIST_NODE_STRU                  *pstNextNode
)
{
    pstPrevNode->pstNext = pstNewNode;
    pstNextNode->pstPrev = pstNewNode;

    pstNewNode->pstNext = pstNextNode;
    pstNewNode->pstPrev = pstPrevNode;
}

/*****************************************************************************
 函 数 名  : OM_AddNodeToListTail
 功能描述  : 获取XPDS pde状态机的大小
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_UINT32:状态机的大小
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年08月21日
    作    者   : x00314862
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID OM_AddNodeToListTail(
    OM_LIST_NODE_STRU                  *pstNewNode,
    OM_LIST_NODE_STRU                  *pstHeadNode
)
{
    OM_AddNodeToList(pstNewNode, pstHeadNode->pstPrev, pstHeadNode);
}

/*****************************************************************************
 函 数 名  : OM_AddNodeToListTail
 功能描述  : 获取XPDS pde状态机的大小
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_UINT32:状态机的大小
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年08月21日
    作    者   : x00314862
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID OM_AddNodeToListHead(
    OM_LIST_NODE_STRU                  *pstNewNode,
    OM_LIST_NODE_STRU                  *pstHeadNode
)
{
    OM_AddNodeToList(pstNewNode, pstHeadNode, pstHeadNode->pstNext);
}

/*****************************************************************************
 函 数 名  : OM_AddNodeToListTail
 功能描述  : 获取XPDS pde状态机的大小
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_UINT32:状态机的大小
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2015年08月21日
    作    者   : x00314862
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID OM_DelNodeFromList(
    OM_LIST_NODE_STRU                  *pstNode
)
{
    pstNode->pstNext->pstPrev = pstNode->pstPrev;
    pstNode->pstPrev->pstNext = pstNode->pstNext;
}

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */




